# C++ Bootcamp by hitesh Chaudhary

## Prerequisite

    gcc compiler is neede to compile the c++ compiler
    Codelite

## Diff between 2 types of hello world in helloworld.cpp

    Is c++ free
    Original versionof c++ newer version
    Its not really https://www.isocpp.org/std/the-standard

## Development version of CPP

    03, 11, 14, 17, 20

## identfiers

    dont go beyond nameing things
    dont use lating support
    dont use underscore at start
    \_at start means private
    \_\_ two underscore characters mean system reserved keyword
    conflict with reserved words like freind, inline etc.

# data types

# Pointer types

# reference types

# Array types

# integers

    Short int
    int
    long int
    long long int
    or unsigned of all of it

# Conditional types

    if , else, else if, switch

# Loops

    ### iterations
    while , do while, for, for (range base loop)

# floats

    float, double, long double
    * take caution while using that *

# Exceptions

    try ,catch ,catch(...)

# function

    basics

# Linkers

    https://stackoverflow.com/questions/9248533/how-does-a-linker-know-what-all-libraries-to-link

    https://stackoverflow.com/questions/3322911/what-do-linkers-do

# Qualifiers

    > MOdified Qualifier
        -> const, volatile, mutable

    > Life Duration Qualifier
        ->static, register, extern, auto

# Operations

    +, -, *, /, %(remainder),
    += , -=,*=, %=, /=, ==, !=, >, < ,>=, <=,
    |(or), &(and), !(not) , &&,  ||

## bitwise operators
    ~, ^ , |,  << lest shift, >> right shift

# Memory Leaks
    space must be deleted after allocation
    new, delete 

# Structures
    basic struct properties

# Enum and Preprocessors
    #define &  enum 
    
# Strong Language
    auto, typeid 

# Stack & Heap Memory
    -> Both of this are in RAM memory
    -> Stack is predefined size (variable,)
    -> Stack is faster 
    -> Heap is predefined but can grow

# Detailed Fucntions
    :description 
    >retun_type name_of_fucntion(what you will give me){
    >    what i will do
    >}

# header files
    calling it via >#include "name.h"< 
    
# templates
    template <typename T> "SYNTAX"

# Functional Pointer
    (*pointer_name)()= function_name;


### nullptr
    use this (nullptr) 

# factorial & Recursion
    int factorial(int n){
        if (n>1){
        return n *factorial(n - 1);
        }else{
        return 1;
        }
    }

# MACROS
    #define LCOINT int16_t
    -> # define name_you_want what_you want_to change

# variadic
    it is a fucntion takes infinite amount of arguments
    SYNTAX "..." used in catch block

# OOPS
    ->abstraction
    class and object creation
    private, public, protected
### getter and setter 
    use const in fucntion arg and 
    try to name private data member as "_name"

### struct 
    change the class to struct if they only consist of a variable.

# Constructor and Destructor
    -> Rule of three methods
    http://www.stackoverflow.com/questions/4172722/what-is-the-rule-of-three 

    Destructor
    ~name()

### Copy Constructor
    User shane;
    User peter = shane;

# this function
    points to the same object memory address 

# Inheritence 
    base class, derived classes
    table of base, public and protected 
    spend a lot of time on base class
## friend keywords
    friend 
