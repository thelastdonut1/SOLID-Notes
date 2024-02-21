public interface IServer
{
	void ProcessMessage(string message)
}

public class Server: IServer
{
	public void ProcessMessage(string message)
	{
		Console.WriteLine($"Server received: {message}");
	}
}

public class AdvancedServer: IServer
{
	public void ProcessMessage(string message)
	{
		Console.WriteLine($"Server received: {message}");
		Console.WriteLine("Performing advanced server process");
		// Advanced processing...
	}
}

public class Client
{
	private IServer _server
	
	// Dependency injection via constructor
	public Client(IServer server)
	{
		_server = server;
	}
	public void SendMessage(string message)
	{
		_server.ProcessMessage(message)
	}
}