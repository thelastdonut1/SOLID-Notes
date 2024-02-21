from abc import ABC, abstractmethod

class IServer(ABC):
    @abstractmethod
    def process_message(self, message):
        pass

class Server(IServer):
    def process_message(self, message):
        print(f"Server received: {message}")

class AdvancedServer(IServer):
    def process_message(self, message):
        print(f"Advanced server received: {message}")
        print("Performing some advanced operations...")

class Client:
    def __init__(self, server: IServer):
        self._server = Server()

    def send_message(self, message):
        self._server.process_message(message)