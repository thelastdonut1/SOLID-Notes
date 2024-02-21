from abc import ABC, abstractmethod

class Policy(ABC):
    def policy_function(self):
        # .. some default implementation steps

        # Call to abstract method which subclasses will implement
        self.service_function()

    @abstractmethod
    def service_function(self):
        pass

class Implementation(Policy):
    def service_function(self):
        # ... implementation specific to 'Implementation' class
        pass
