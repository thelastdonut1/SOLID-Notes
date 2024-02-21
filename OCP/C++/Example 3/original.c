enum ShapeType {circle, square};

struct Shape
{
	ShapeType itsType;
};

struct Circle
{
	ShapeType itsType;
	double itsRadius;
	Point itsCenter;
};

void DrawCircle(struct Circle*);

struct Square
{
	ShapeType itsType;
	double itsSide;
	Point itsTopLeft;
};

void DrawSquare(struct Square*);

typedef struct Shape *ShapePointer;

void DrawAllShapes(ShapePointer list[], int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		struct Shape* s = list[i];
		switch (s->itsType)
		{
		case square:
			DrawSquare((struct Square*)s);
		break;
		
		case circle:
			DrawCircle((struct Circle*)s);
		break;
		}
	}
}