class Server:
    def process_message(self, message):
        print(f"Server received: {message}")

class Client:
    def __init__(self):
        self.server = Server()

    def send_message(self, server, message):
        server.process_message(message)