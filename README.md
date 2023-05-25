# CPP00

namespaces:
1->namespaces provides a method for preventing name conflicts in large projects. It allows you to group symbols that are related together.

2->All the entities included in the C++ standard library are included in the std namespace.

3->However, using namespace std is considered bad practice, as it imports the entirety of the std namespace into the current namespace of the program. It's better to use scope resolution operator to access the specific entity (like std::cout).

stdio streams:
1->Streams acts as an intermediaries between the programs and the actual IO devices. It frees the programmers from handling the actual devices.

2-> << >> redirects the flow to or from a stream (like std::cout or std::cin).

3->Object std::endl handles newline character on different OS.

class & instance:
1->C++ is an object-oriented programming language. An object is created from a class. Everything in C++ is associated with classes and objects, along with its attributes(variables) and methods(functions).

2->A class is a user-defined data type. It works as an object constructor, or a blueprint for creating objects. A class is static and it's a model which objects are built on. Instance is the dynamic part and it's an instantiation of a class.

3->Constructors and destructors are special member functions of classes that are used to construct and destroy class objects.

4->Constructor may involve memory allocation and initialization for objects. Destructor may involve cleanup and deallocation of memory for objects.

5->Like other member functions, constructors and destructors are declared within a class declaration. They can be defined inline or external to the class declaration.

6->Constructor and destructor don't have a return type.

7->The compiler automatically calls constructors when defining class objects and calls destructors when class objects go out of scope.

member attributes & functions:
1->A member function of a class is a function that has its definition or its prototype within the class definition like any other variable. It operates on any object of the class of which it is a member, and has access to all the members of a class for that object.

2->Member attribute is a variable you have in your class, and you may use from an instance.

this pointer (the self keyword):
1->In C++, each object gets its own copy of data members and all objects share a single copy of member functions. To refer to your current instance, use the special instance pointer this.

2->One member function only has one copy and is used by multiple objects, how are the proper data members accessed and updated? The compiler supplies an implicit pointer along with the names of the functions as 'this'.

initialization list:
1->Initialization list is used in initializing the data members of a class. The list of members to be initialized is indicated with constructor as a comma-separated list followed by a colon.

const:
1->Variables declared with const added become constants and cannot be altered by the program.

2->const data members must be initialized using initialization list. No memory is allocated separately for const data member. It is folded in the symbol table due to which we need to initialize it.

3->const data members is also a copy constructor. We don't need to call the assignment operator which means we are avoiding one extra operation.

4->The more your code is const and read only, the more your code will be robust in the long term.

visibility:
1->Public and private will allow you to control the encapsulation of the members of the class. It means that the attributes and member functions will only be visible from inside the class or from the outside.

2->Public attributes and functions can be accessed both inside and outside of the class.

3->Private attributes and functions are only accessible from inside of the class. These attributes and functions are perfectly invisible and inaccessible from the outside of the class, otherwise, the code will not compile.

4->Keep in mind: for attributes or functions that have nothing to do with the user, keep them private in the class. When designing the class, always think about what to keep internally or expose to the outside.

class vs struct:
1->A class can also contain functions (called methods in C++). The member attributes and methods are hidden from the outside world, unless their declaration follows a public label.

2->Special methods (constructor and destructor) in C++. They run automatically when an object (an instance of the class) is created and destroyed.

3->Operators to work on the new data type can be defined using special methods (member functions).

4->One class can be used as the basis for the definition of another (inheritance).

5->Declaring a variable of the new type (an object) requires just the name of the class. The keyword class is not required.

6->struct and class work almost the same way in C++. The difference is that the default accessibility / scope of member variables and methods is private in a class, while it's public in a struct. The use of class is generally preferred.

accessors (getters):
1->An accessor is a member function that allows someone to retrieve the contents of a protected data member.

2->The accessor must have the same type as the returned variable.

3->The accessor does not need to have arguments.

4->A naming convention must exist, and the name of the accessor must begin with the get prefix.

5->In practice, all attributes of a class are private. Getters are the interface between the user and private attributes, to be sure that the values are always correct.

6->They usually have the prefix of get and set. Getter can only access in the read-only mode and won't alter the content of the class. It allows you to have some control over what to give to the user. It also sets control to the user's input and make sure that they make sense.

C++ strings:
1->str.length(). Count the number of characters in a string.

2->str[]. Use square brackets to access individual characters within a string. No range-checking.

3->str.at(int index). Retrieve the character at a position with the benefit of built-in range-checking.

4->== / !=. Compare two strings for equality.

5->s1 + s2 / +=. Appending another string or a single character to the end of a string.

6->str.find(key) / str.find(key, n). Search within a string for a particular string or character. key can either be a string or a character. We say the find member function is overloaded to allow more than one usage.

7->str.substr(start, length). Extract substrings. Create new strings by extracting portions of a larger one. This member function does not change the receiver string, as it makes a new string with a copy of the characters specified.

8->str1.insert(start, str2) / str1.replace(start, length, str2). Modify a string by inserting and replacing. These functions do modify the receive string.

9->C-style string. Although old-style C char * strings and C++ strings can co-exist in a program, almost all use will be of C++ strings, since they have a much richer set of operations and are less error-prone to work with. However, when working with file streams, it's unavoidable to use C-style string.

10->Important: When using (std::string str) as parameter, it takes a copy from the calling function to the destination function. It is not fast to dynamically allocate a string to create a copy. If you are not going to modify the string, send it as a const &, in this way, it will not create a copy.

Difference between std::cin and getline:
  std::cin >> string:
1->Each extracted character is appended to the string.

2->The extraction operations use whitespaces as separators. Therefore, this operation will only extract what can be considered as a word from the stream.

  getline:
1->To extract entire lines of text.

2->The extraction stops until the delimitation character, or the end of file is reached, or some other error occurs during the input operation.

# CPP01

New and delete:
1->malloc() an object does not work in C++, because it does not call the constructor of the object. Similarly, if you free() an object, it also won't call the destructor.

2->new() and delete() use malloc() and free() in reality, but they also call the constructor and destructor in an appropriate way.

3->new() does not take parameters. So need to think of ways to initialise values.

Stack vs heap memory:
->Both of these memories locate in the RAM. The way the memory will be assigned is different
  Stack:
1->Has predefined size (around 2GB).

2->When we want to use stack memory, the stack pointer moves and allocate the size of the memory that we want, and return the stack pointer. So the values we assign on stack will be close to each other and be assigned backwards. A stack memory allocation is one CPU instruction and very fast.

3->Once the scope in which you allocated that stack memory ends, all the memory allocated in the stack will be reclaimed.

4->Stack overflow happens when all the memory in the stack has been allocated, in which case further allocations begin overflowing into other sections of memory.

5->If you can allocate on the stack, choose stack.

  Heap:
1->Has a predefined size but it can grow.

2->Use new() keyword to allocate on the heap.

3->Sequential memory requests may not result in sequential memory addresses being allocated.

4->The heap allocated memory needs to be manually freed.

5->Dynamically allocated memory must be accessed through a pointer. Dereferencing a pointer is slower than accessing a variable directly.

Pointers:
1->Pointers are extremely important for managing and manipulating memory.

2->A pointer is an integer that stores a memory address. It is the address of where that specific memory is.

3->The types of that pointer do not matter. It only indicates the type of data that's presumably holding. It's something we write to make our lives easier syntatically. Type does not change what a pointer is.

4->Pointing to an invalid memory address (like 0) is perfectly fine for pointer.

5->When putting & before a variable, we are asking the address of that variable.

6->Dereferencing (*ptr) means accessing the data. In this way, you can write to or read from the data.

7->Pointers themselves are also variables and stored in memory.

References:
References are aliases for existing variables. It is a pointer that is constant and always dereferenced and never void.

1->A way for us to reference an existing variable. But pointer can be pointing to a non-existing address.

2->References are not new variables. they don't really occupy memory or have storage.

3->int& ref = a; & is part of the type. We actually created an alias.

4->When you pass a value to a function, you are passing a copy of the value. For the destination function to change the value, you need to pass the memory address of that variable (using a reference or a pointer).

5->*value++; Because of the order of operation, it will increment first and then dereference it. What's correct is to dereference first and increment it later - (*value)++.

6->If you can, use reference and it will make the source code looks cleaner.

7->Once you define a reference, you can't change what a reference is.

  References vs. pointer:

1->You can't change where the reference is pointing to. It will always point to the same variable.

2->You can't create a reference and let it point to nothing (uninitialised reference). Because it is constant, you can't point to something else later. But a reference can't point to nothing.

3->Advantage: when you have a reference, you are sure that it's pointing to something.

4->Reference is like a dereferenced pointer. So you don't need to add any symbol to access it.

5->References are complimentary to pointers but they don't replace pointers. However, you can't have a reference and not initialise it to something. In comparison, using a pointer, you can point it to something that does not exist in the beginning, and change what it points to later.
Pointers and references are essentially the same thing, regarding how the computer will do with them. Pointers are more flexible than references. If something should always exist and never change, use a references. But if it should not always exist and can change, use a pointer.

Destructor called without a constructor:
1->Passing an instance of a class by value (not by pointer or reference) invokes the copy constructor. The compiler implements the copy constructor by default if the class definition does not explicitly supply one.

2->The compiler-generated copy constructor will not call one of the other constructors you've implemented. But the destructor will be invoked to clean up the copy when done.

3->When you pass an instance to another function, when the function runs, it's added to the stack to process. A copy of the instance is sent to the stack, not the actual instance. Therefore, the system will use a copy constructor to create a copy and when the local copy is out of scope, the destructor will be called. However, in this case, the default constructor is not called.

4->In order to actually change the original instance, you need to pass the instance with a pointer or a reference. So the function can actually access the location of the original instance and make change to that instance/data member. If such case exists, a decision needs to be made between a reference and a pointer.

Streams:
1->A stream is an abstract representation of an input device or an output device that is a sequential source or destination for data in your program. It is represented by a class type.

2->You can visualize a stream as a sequence of bytes flowing between an external device and the main memory of your computer. You can write data to an output stream and read data from an input stream; some streams provide the ability for both input and output.

3->In summary, all input and output is a sequence of bytes being read from, or written to, some external device.

4->When you read data from an external device, it's up to you to interpret the data correctly. You need to know the structure and type of data in advance, and read and interpret it accordingly.

You don't have to worry about the detailed mechanics of each device. They are all taken care of behind the scene
A program will work with a variety of disparate physical devices without necessitating changes to the source code
The physical reality of an output stream can be any device to which a sequence of bytes can be transferred. File stream I/O will typically be to a file on a disk or on a solid state device.

The standard library defines three standard output stream objects:
1->std::cout : standard output stream.

2->std::cerr : unbuffered standard error stream (data is written immediately to the output device).

3->std::clog : buffered standard error stream (data will only be written when the buffer is full).

4->In principle, an input stream can be any serial source of data, but it's typically a disk file or the keyboard.

File streams:
1->Streams that interact with files. There are three types of stream objects for working with files: ifstream, ofstream, and fstream.

2->These classes have istream, ostream, and iostream as base classes, respectively.

3->An istream object represents a file input stream so you can only read it.

4->An ofstream object represents a file output stream that you can only write to it.

5->An fstream is a file stream that you can read or write.

6->You can associate a file stream object with a physical file when you create it. You can also create a file stream object that isn't assciated with a file, and then call a function member to establish the connection with a specific file.

7->In order to read or write a file, you must "open" the file; this attaches the file to your program via the operating system with a set of permissions that determine what you can do with it. If you create a file stream object with an initial association to a file, the file is opened and available for use immediately.

8->A file stream has some important properties. It has a length, which corresponds to the number of characters in the stream; it has a beginning, which is index position of the first character in the stream; and it has an end, which is the index position one beyond the last character in the stream. It also has a current position, which is the index position of the character in the stream where the next read or write operation will start. The first character in a file stream is at index position 0. These properties provide a way for you to move around a file to read the particular parts that you’re interested in or to overwrite selected areas of the file.
