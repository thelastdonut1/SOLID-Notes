#include <typeinfo>
#include <string>
#include <iostream>

using namespace std;

class Shape
{
    public:
        virtual void Draw() const = 0;
        bool Precedes(const Shape&) const;
        bool operator<(const Shape&) const;
        {return Precedes(s);}
    private:
        static const char* typeOrderTable[];
};

const char* Shape::typeOrderTable[]
{
    typeid(Circle).name(),
    typeid(Square).name()
    0
};

// This function searches a table for the class names.
// The table defines the order in which the
// shapes are to be drawn. Shapes that are not
// found always precede shapes that are found.

bool Shape::Precedes(const Shape& s) const
{
    const char* thisType = typeid(*this).name();
    const char* argType = typeid(s).name();
    bool done = false;
    int thisOrd = -1;
    int argOrd = -1;
    for (int i=0; !done; i++)
    {
        const char* tableEntry = typeOrderTable[i];
        if (tableEntry != 0)
        {
            if (strcmp(tableEntry, thisType) == 0)
                thisOrd = i;
            if (strcmp(tableEntry, argType) == 0)
                argOrd = i;
            if ((argOrd >= 0) && (thisOrd >= 0))
                done = true;
        }
        else // tableEntry == 0
            done = true;
    }
    return thisOrd < argOrd;
}

template <typename P>

class Lessp // utility for sorting containers of pointers
{
    public:
        bool operator()(const P p, const P q) {return (*p) < (*q);}
};

void DrawAllShapes(vector<Shape*>& list)
{
    vector<Shape*> orderedList = list;

    sort(orderedList.begin(),
         orderedList.end(),
         Lessp<Shape*>());
    
    vector<Shape*>::const_iterator i;

    for (i=orderedList.begin(); i != orderedList.end(); i++)
        (*i)->Draw();
}
