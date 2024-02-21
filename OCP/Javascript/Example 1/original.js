class Server {
    processMessage(message) {
        console.log(`Server received: ${message}`);
    }
}

class Client {
    constructor() {
        this._server = new Server();
    }

    sendMessage(message) {
        this._server.processMessage(message);
    }
}
