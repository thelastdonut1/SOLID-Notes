class IServer {
    processMessage(message) {
        throw new Error("Method 'processMessage()' must be implemented.");
    }
}

class Server extends IServer {
    processMessage(message) {
        console.log(`Server received: ${message}`);
    }
}

class AdvancedServer extends IServer {
    processMessage(message) {
        console.log(`Server received: ${message}`);
        console.log("Performing advanced server process");
        // Advanced processing...
    }
}

class Client {
    constructor(server) {
        if (!(server instanceof IServer)) {
            throw new Error("server must be an instance of IServer");
        }
        this._server = server;
    }

    sendMessage(message) {
        this._server.processMessage(message);
    }
}
