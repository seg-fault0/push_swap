# PUSH_SWAP

**push_swap** is a 42 School challenge aimed at sorting a stack of integers with the least number of operations. The program manipulates two stacks using a limited set of operations to sort the integers in ascending order

## Allowed Operations 

- sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
- sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
- ss : sa and sb at the same time.
- pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
- pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
- ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
- rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
- rr : ra and rb at the same time.
- rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
- rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
- rrr : rra and rrb at the same time

## How to Build (MANDATORY)

1. Clone the repository:
   ```bash
   git clone https://github.com/seg-fault0/push_swap.git
   cd push_swap
   ```
### MANDATORY
1. Build the project Makefile:
   ```bash
   make
   ```
2. Run the project
	```bash
	./push_swap 4 3 10 7 0 10 
	```

### BONUS
##### concept
The bonus is about making a checker that takes as an argument the stack a formatted as a list of integers. The first argument should be at the top of the stack, then wait and read instructions on the standard input, each instruction will be followed by ’\n’.

##### build
1. Build the project Makefile:
   ```bash
   make bonus
   ```
2. Run the project
	```bash
	./checker 4 3 10 7 0 10 
	```
3. The program then waits for the user to input instructions followed by a new line. When the user is done, they can press Ctrl+D. The checker will then print to stdout either 'OK' if the instructions sorted stack A, or 'KO' if the instructions did not sort the stack correctly.

## Rules
1. All arguments must be integers (INT).
2. Arguments must be within the INT range.
3. Duplicated numbers are forbidden.

## Algorithm Visualization
![Gameplay](visualization.gif)

## Tools
To Generate random numbers run the following :
```bash
python3 ./tools/nbr_gen.py
```

To visualize the code, make sure there is the push_swap prog the run the folowing :

```bash
./tools/visualizer
```

To run the official 42 checker run the following:

```bash
ARG="2 1 10 5 0"; ./push_swap $ARG | ./tools/checker_linux $ARG
```