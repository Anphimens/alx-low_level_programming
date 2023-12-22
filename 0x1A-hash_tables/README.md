# C - Hash tables

## Overview
This project explores the concept of hash tables and their application. Below are the key learning objectives covered in this project.

## Learning Objectives

### 1. What is a Hash Function?
A hash function is a function that takes an input (or 'key') and returns a fixed-size string of characters, which is typically a hash code. It is a crucial component in hash table implementations.

### 2. What makes a Good Hash function?
A good hash function should distribute keys uniformly across the hash table ti minimize collisions. It should also be deterministic and efficient to compute.

### 3. What is a Hash Table?
A hash table is a data structure that stores key-value pairs. It uses a hash function to map keys to indices in an array, allowing for efficient retrieval of values based on their keys.

### 4. How Do Hash Tables Work and How to Use Them?

Hash tables work by converting keys into indices using a hash function and storing values at those indices. To use a hash table, you provide a key, and the hash table quickly returns the associated value.

### 5. What is a Collision?

A collision occurs when two or more keys hash to the same index. Handling collisions is a critical aspect of hash table design.

### 6. Main Ways of Dealing with Collisions

Common techniques for handling collisions include chaining (linked lists at each index) and open addressing (finding the next available slot).

### 7. Advantages and Drawbacks of Hash Tables

Advantages include fast retrieval and insertion times, while drawbacks may include the potential for collisions and the need for a good hash function.

### 8. Common Use Cases of Hash Tables

Hash tables are widely used in various applications, including database indexing, caching, and implementing associative arrays.

## Getting Started
This projects contains about 3 different types of files:
[Header file]()
[Tasks]()
[Read me file]()