---
title: Week 4 Tutorial
sidebar: 4
sidebar-title: Week 4
---


---


<p align="center"> <a> Recorded video (to be updated) </a> </p>

---

# Pointers!

Pointers are just a variable. This variable will store in its *memory box* the memory address of another variable, which we can decide. When we create a pointer, its type must match the variable type.

For example, if you want to initialize the pointer ```p``` that will store the address of an integer, we can do the following:

```c
int *p = NULL;
```
---

## How do we use pointers?

---

We first need to **assign** a variable to our pointer. For that we use the ```&``` symbol.

```c
// We have already initialized our pointer above.
// Now, we are going to store the address of an integer.
int x = 0;
p = &x;
```

We use pointers to **access** the value from the variable that they are pointing to. 

```c
// In this case, now y will have the same value as the one
// p is pointing to (aka 'x')
int y = *(p);
// Let's say now you want to access the variable that is
// stored next to x.
int z = *(p + 1);
```

We can not only copy the contents of the variable that the pointer is pointing to, but we can also access memory boxes that are around the variable box. For that we can use an *offset*, that will help us move around memory.

```c
// Let's say now you want to access the variable that is
// stored next to x.
int z = *(p + 1);
// The offset is 1 in this case.
```

We can also **modify** the value of the memory box stored in the pointer.

```c
// Let's change the value of x to 3.
// We need to modify then it's memory box
*(p) = 3;
```

---

## Pointers and Arrays

---

Now that we have learnt about pointers, you can use those to work with arrays too. There are two ways we can store the address of the head of the array in a pointer.

```c
// Don't forget to initialize the pointer
int *p = NULL;
int my_array[5];

// Way 1: getting the address of the first element
p = &my_array[0];
// Way 2: direct assignment
p = my_array;
```

We can use offsets to access (and modify) other values of the array.

```c
// We can initialize the values of the array to 0
*(p) = 0;
*(p + 1) = 0;
*(p + 2) = 0;
*(p + 3) = 0;
*(p + 4) = 0;
```

---

## Exercises

---

Let's review the *reverse* function we did in lecture, which takes as input two pointers: the first one points to the string we want to revert and the second one points to were we want to store the new reversed word.

```c
void reverse(char *input, char *out) {
    printf("TODO\n");
}

int main(){
    char str1[1024] = "Hello";
    char str2[1024];

    reverse(str1, str2);

    // Expected: Hello
    printf("input is %s\n", str1);
    // Expected: olleH
    printf("output is %s\n", str2);
}
```

Now, we will create the function *reverse_in_place* that will reverse a string in place. 

*Hint:* Use pointers and offsets!

```c
void reverse_in_place(char *input) {
    printf("TODO\n");
}

int main(){
    char str1[1024] = "Hello";

    // Expected: Hello
    printf("Before: %s\n", str1);

    reverse_inplace(str1);

    // Expected: olleH
    printf("After: %s\n", str1);
}
```

Given the following starter code, implement the function *pokeAround* to print the values stored in the other variables around it.

*Hint:* Use the same hint as last exercise :)

```c

void pokeAround(char *p){
    printf("TODO\n");
}

int main(){
    char  oneStr[1024]="I am string ONE!";
	char  twoStr[1024]="I am string TWO!";
	char  c='C';
	char  d='*';
	char  e='!';
	char  f='@';
	int   x=65;

	pokeAround(&twoStr[0]);
}

```

---