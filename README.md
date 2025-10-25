# HYPERC 

This project is an experimental endeavor I started with the goal of **extending the C language and adapting it to my own needs**.  
As a developer with ADHD, I apply my own methods to make the coding process fun and fluid.

The name HyperC is inspired by ADHD, specifically the hyperactivity aspect.

---

## Project Goals

As the project progresses, I plan to add:

- **Array Management:** Dynamic arrays and resizing operations.  
- **Memory Management:** Safe and efficient memory handling using `malloc`, `realloc`, `free`, etc.  
- **Error Handling:** Catching program errors and responding appropriately.  
- **Logging System:** Tracking program execution and recording errors and actions.  
- **Error Control Systems:** Security and validation mechanisms against unexpected situations.  
- **Object-Like Structures:** Structures that mimic class/object behavior in C for modular coding.

---

This project is a **personal, experimental effort to develop C according to my own needs**.  
My aim is to go beyond classic C and build a **more flexible, user-focused foundation**.  

> ⚡ Note: This is an ADHD project! Ideas come fast, code evolves through trial and error, and fun is a priority.  


# HyperC Core Functions

HyperC provides a set of helper functions for working with dynamic arrays and strings in C. These functions allow you to **add** and **delete** elements from arrays of various data types safely and efficiently, as well as read user input as strings.

Additionally, users can use loops to add or delete multiple elements at once, making it easy to manipulate arrays dynamically.

---

## 1. Reading Strings

```c
string get_string(const char* prompt);
```

* **Description:** Reads a string from standard input. Allocates memory dynamically for the string.
* **Parameters:**

  * `prompt` – (optional) Message to display before reading input. Pass `NULL` to skip prompt.
* **Returns:** A dynamically allocated string. Remember to free it after use.
* **Example:**

```c
string name = get_string("Enter your name: ");
printf("Hello, %s!\n", name);
free(name);
```

---

## 2. Adding Elements to Arrays

All `*_AddElement` functions have the following signature pattern:

```c
void Type_AddElement(Type** array, int size, Type element, int place_to_add);
```

* **Description:** Adds an element to a dynamic array of a specific type.

* **Parameters:**

  * `array` – Pointer to the array.
  * `size` – Current size of the array.
  * `element` – The element to add.
  * `place_to_add` – Index where the element should be inserted. Use `ARRY_END` to append at the end.

* **Supported Types:**

  * `short`, `unsigned short`, `int`, `unsigned int`
  * `long`, `unsigned long`, `long long`, `unsigned long long`
  * `float`, `double`, `long double`

* **Example (Single Element):**

```c
int* numbers = malloc(sizeof(int) * 3);
numbers[0] = 1;
numbers[1] = 2;
numbers[2] = 3;

Int_AddElement(&numbers, 3, 99, 1);
Int_AddElement(&numbers, 4, 100, ARRY_END);
free(numbers);
```

* **Example (Multiple Elements with Loop):**

```c
int* numbers = malloc(sizeof(int) * 3);
numbers[0] = 1;
numbers[1] = 2;
numbers[2] = 3;

for(int i = 0; i < 5; i++) {
    Int_AddElement(&numbers, 3 + i, i * 10, ARRY_END);
}
free(numbers);
```

---

## 3. Deleting Elements from Arrays

All `*_DellElement` functions have the following signature pattern:

```c
void Type_DellElement(Type** array, int size, int element_index);
```

* **Description:** Deletes an element from a dynamic array of a specific type. Memory is reallocated to the new size.

* **Parameters:**

  * `array` – Pointer to the array.
  * `size` – Current size of the array.
  * `element_index` – Index of the element to delete. Use `ARRY_END` to delete the last element.

* **Supported Types:**

  * Same as `*_AddElement`.

* **Example (Single Element):**

```c
int* numbers = malloc(sizeof(int) * 5);
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;

Int_DellElement(&numbers, 5, 2);
Int_DellElement(&numbers, 4, ARRY_END);
free(numbers);
```

* **Example (Multiple Elements with Loop):**

```c
int* numbers = malloc(sizeof(int) * 10);
for(int i = 0; i < 10; i++) numbers[i] = i * 5;

for(int i = 0; i < 5; i++) {
    Int_DellElement(&numbers, 10 - i, ARRY_END);
}
free(numbers);
```

