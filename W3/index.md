---
title: Week 3 Tutorial
sidebar: 3
sidebar-title: Week 3
---


---


<p align="center"> <a href='https://youtu.be/6YJWDlFQyWc'> Recorded video (courtesy Will) </a> </p>

---

# C Memory Model and Arrays

---

## Memory Model in C

---

It is like a locker room! All locker boxes are numbered in increasing order and they can only be accessed by the right user.

Each box contains some important information like the memory address (locker number, which is unique), variable name, variable type and the variable value.

![empty](MMEmpty.png)

There are three different ways in which a program can get a box in memory:
- Declaring a variable
- Input parameters to functions
- Return value

Let's try an example and draw the diagram of the memory model for the following piece of code, right at the point where the result is returned (right before releasing the spaced reserved for the funcion)

```c
# include <stdio.h>

float div_by_two(int s){
    float result;
    result = s / 2;
    return result;
}

int main(){
    int x, result;
    float y, z;
    x = 3;
    y = div_by_two(x)
    z = y + 3;
    result = z / 2;
    printf("The result is: %d\n", result);
}

```
You can use this template:

![template](MMTemp.png)

---

## Arrays & Strings

---

### Arrays

Arrays are a fixed-size collection of contiguous boxes (in memory) of the same data type.

Arrays are passed to functions by telling its location in memory, so the function can modify the array directly. It does not make a copy.

Remember that unlike Python, C does not warn you about using out-of-bounds indeces so it is your responsibility to be careful on how you are indexing, otherwise you will access elements outside of the array.

### Strings

Strings are also known as arrays of characterss, but with an special add-on: the end-of-string delimeter *\0*. The end-of-string delimeter indicates when the string ends.

Let's look at the following piece of code, what do you think it will print out?

```c
# include <stdio.h>

int main(){
    char original[1024] = "This is the original string!";
    char unoriginal[1024] = "And this is another string!";

    // We want to make the original variable to be the unoriginal string
    original = unoriginal;

    printf("%s\n", original);
}
```

How about this other one? Would this work?

```c
# include <stdio.h>

int main(){
    int array_one[10];
    int array_two[5];

    for (int i=0; i<5, i++){
        array_two[i] = i
    }

    // We want to initialize the first 5 elements of array_one
    // to be the elements of array_two
    array_one = array_two;

}
```

As we could see, both of them do not compile. How can we fix them in order to make them work? *Try it out!*

*Hint:* Use a loop! If we want to make a copy of an array, we have to do it each element at once. We will see other build-in functions later, that can make our job easier.

---

## Exercise

---

Write a function that takes two input strings and *swap* their content. Note that the size of the arrays for each string is 1024, but the strings could have a different length.

Once you are done, you can use this piece of code to test out your function:

```c
# include <stdio.h>

int main(){
    char first[1024] = "Hello!";
    char second[1024] = "It's beginning to look a lot like Christmas";

    printf("F: %s - S: %s\n", first, second);
    // Expected:
    // F: Hello! - S: It's beginning to look a lot like Christmas

    swap(first, second);

    printf("F: %s - S: %s\n", first, second);
    // Expected:
    // F: It's beginning to look a lot like Christmas - S: Hello!
}

```

Write a function strfind that *searches* a given string in the specified main string, and returns the index of the first occurrence of the given string.

For example, the following should return 3.

```c
strfind("My name is Angela", "name") 
``` 
---