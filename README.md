# Embedded-Intern-Hiring-Test
 
## Prime or Not (c)
- **Input**: a number **n**

- **output**:
  - 1 if **n** is a prime number
  - output the smallest multiplier if **n** is not a prime number

e.g.

> *input*:          24

> *output*:         2

> *input*:          15

> *output*:         3

> *input*:          83

> *output*:         1





## Tree Depth (c++20)
- **Input**: a string of parentheses-representing tree 
  - (each node is represent by a pair of open parenthesis and close parenthesis) 
- **Output**: depth of the tree

e.g. 
```
**((()((()())))()(()))**
```
![tree_example](https://github.com/zhuoming34/Embedded-Intern-Hiring-Test/blob/main/tree_example.png)

**Depth is 5 for the example above**





## String Line Reversal (c)
- **Input**: user input characters (max length of 1024)
- **Output**: print the lines
  - reverse a line if it ends with '\n'
  - do not reverse a line if it starts with '#'
  - append to the next line if a line ends with '\' before '\n'

e.g.
*input*
```
abc123
#abc123
abcd\
efgh
```
*output*
```
321cba
abc123
hgfedcba
```





## Fastest Escalator (c++20)
- **Input**: a 2D vector 
  - ({ Left branch duration, Right branch duration, crossroad duration }) 
- **Output**: the least amount of time to arrive at the top

e.g.
```
 { {7, 3, 2},
   {3, 6, 1} }
```
![escalator_example](https://github.com/zhuoming34/Embedded-Intern-Hiring-Test/blob/main/escalator_example.png)

**Time to arrive at the top is 6 for the example above**
