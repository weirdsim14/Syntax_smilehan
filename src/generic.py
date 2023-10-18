from typing import TypeVar, Generic

# Type variables
T1 = TypeVar('T1')
T2 = TypeVar('T2')

class Fair(Generic[T1, T2]):
    def __init__(self, first: T1, second: T2) -> None:
        self.first = first
        self.second = second

    def display(self) -> None:
        print(f"First : {self.first}, Second: {self.second}")

#Usage

fair1 = Fair[int, str](1, "banana")
fair1.display()


