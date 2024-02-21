class Policy {
    policyFunction() {
        // .. some default implementation steps

        // Call to supposed abstract method which subclasses will implement
        this.serviceFunction();
    }

    serviceFunction() {
        throw new Error("Abstract method 'serviceFunction' must be implemented by subclass");
    }
}

class Implementation extends Policy {
    serviceFunction() {
        // ... implementation specific to 'Implementation' class
    }
}
