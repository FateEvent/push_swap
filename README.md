# Push_swap

Push_swap is a very simple and a highly straightforward algorithmic project about the implementation of a sorting algorithm making use of two stacks.

The goal of the project is to create a program in C that, given a series of integers as arguments, calculates and displays on the standard output, with as few actions as possible, how many moves are necessary to sort the input data.

We have a certain number of possible actions that we can execute on the stacks, among which swapping the first two elements of a stack, put the last element of a stack on top of it and place the first element of a stack on top of the other.

To do this project, I implemented an algorithm based on the [Radix sort](https://en.wikipedia.org/wiki/Radix_sort) algorithm, creating and distributing elements into buckets according to their radix, or base.

The use of the binary representation of the given integers allowed me to limit the number of buckets (our stacks) to two, and reducing the numbers to their position index in the series offered me the possibility to have positive numbers and a limited range.

Starting from the rightmost (least significant) digit in the binary representation of each number, numbers are put on a stack or the other according to whether the considered digit is a 1 or a 0.

That's how our numbers are sorted.

### Bibliography

* Here is an interesting article implementing the logic of [doubly linked lists](http://sdz.tdct.org/sdz/les-listes-doublement-chainees-en-langage-c.html).

* For further info on the radix method used in this project, see the article [Push_Swap Tutorial](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e) on Medium.