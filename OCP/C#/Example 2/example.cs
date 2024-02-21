public abstract class Policy
{
	// The 'Template Method' defines the structure of an algorithm
	public void PolicyFunction()
	{
		// .. some default implementation steps
		
		// Call to abstract method which subclasses will implement
		ServiceFunction();
	}
	// Abstract method that subclasses will provide implementation
	protected abstract void ServiceFunction();
}

public Implementation : Policy
{
	// Concrete implementation of the abstract method
	protected override void ServiceFunction()
	{
		// ... implementation specific to 'Implementation' class
	}
}