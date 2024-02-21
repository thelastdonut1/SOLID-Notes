public class Server
{
	public void ProcessMessage(string message)
	{
		Console.WriteLine($"Server received: {message}");
	}
}

public class Client
{
	private Server _server
	public Client()
	{
		_server = new Server();
	}
	public void SendMessage(string message)
	{
		_server.ProcessMessage(message)
	}
}