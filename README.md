Tasks

1) (4.5p) We want to use the polish notation (prefix notation) for computing the value of

certain expressions, using stacks (NOT the reverse polish notation – postfix - from the

course!!)

Ex: A + B * C becomes in polish notation + A * B C

a) (1p) Create a class Variable with two fields: symbol and value. Create its constructor and

all necessary methods. You will use this class later in order to create objects representing

the variables of your expression and their values (with the goal of eventually computing

the numerical result of your expression)

b) (0.5p) Read an expression from the keyboard, in the form of a string of characters:

Ex: A + B * C

c) (1.5p) Use the polish notation algorithm to transform the read (infix) expression into its

polish (prefix) form, using stacks. Print the result. (OBS: the algorithm must work for any

read expression)

d) (1.5p) Using objects of the class created at point a), read the values of the expression’s

variables and compute the numerical result of the expression using the algorithm for

evaluating a prefix expression. Print the result on the screen.

Ex : If we read :

A 2

B 3

C 5

And our expression is A + B * C, which in prefix is + A * B C, our result will be 17.

BONUS (1p): Make the conversion from prefix to postfix form and compute the result of

the same expression using postfix. Use this result to check your prefix evaluation.

2) (1.5p) Legolas and his elven pals have arrived in Moria. Due to an unfortunate series of

events, they find themselves surrounded by N goblins. They decide upon a pretty simple

strategy: identify the most dangerous goblin they can see and eliminate it first. Rinse,

repeat, victory! Each of the goblins has a power level. The goblins are running around on

a ledge that does not allow more than X goblins to be visible to the elves at one time. The

input will be given in the form: on the first line N and X (X <= N), on the second line the

power levels of the goblins in order.

Ex: if we read

6 5

1 2 2 3 4 5

We will have N = 6, X = 5 and the powers of the 6 goblins are [1, 2, 2, 3, 4, 5].

At first, our queue will contain all N goblins. At each step, we dequeue() the first X

goblins (if there are less than X goblins, we dequeue() them all). Legolas chooses the

goblin with the highest power level and shoots him. We print the index of this goblin in

the original order of the queue and we eliminate him from the fight. The other goblins we

have dequeued survive, but the lose morale and their power levels decrease by one. We

add them (in the order they have been dequeued) back in our queue. We stop when X

goblins have been vanquished, as the others will just run away.

OBS:

1. If there is more than one goblin of the highest power in the X dequeued goblins,

Legolas chooses the first one that was dequeued

2. The goblins’ power levels can’t decrease below 0, when they get to 0 they remain 0

during all following steps

In our example:

Step I: We dequeue() the first 5 goblins [1, 2, 2, 3, 4]. The most powerful goblin is the

last one, with the power ‘4’. His index in the initial queue is 4 (we start counting from 0).

This element is eliminated and we add the rest of the goblins back in the queue,

decreasing their power by 1. The queue is now [5, 0, 1, 1, 2].

Step II: We dequeue() all 5 goblins [5, 0, 1, 1, 2]. The most powerful is the first one,

whose power is ‘5’ and original queue index is 5. This goblin is defeated and the rest are

added back in the queue with decreased power. The queue is [0, 0, 0, 1] (powers can’t get

below 0).

Step III: We dequeue() the 4 remaining goblins [0, 0, 0, 1]. The most powerful is the last

one, whose remaining power is ‘1’ and original queue index is 3. The queue becomes [0,

0, 0]

For the next two steps, as all the goblins have the same power, they will be removed in

order. We will then have on the screen the indexes of the defeated goblins: 4, 5, 3, 0, 1.

Use queues to help Legolas in his fight.

3) (4p) We have opened a restaurant, but we only have one chef. In this restaurant, we use

queues to organize the orders that come in. Each order is represented by two numbers: the

time t (at which the client comes in and places the order) and the duration d (time taken

for our chef to prepare the dish). The orders received will be sorted by their arrival time t.

When the dish is ready, we eliminate the order from our queue and the chef begins

working on the next (if there is one). The restaurant closes at the time T.

a) (1p) Choose a convenient method of storing the orders (arrival time and duration). Bonus

for using a struct or a class. Read from the keyboard two numbers - N and T - and then

the N orders.

b) (1p) Print all the times at which the queue is empty and our chef can take a breather. As

an alternative, print these times as intervals. Only print values inside the working time of

the restaurant (before time T).

c) (0.5p) Print the maximum duration our chef has to work on a single order.

d) (1p) For each order, print the theoretical completion time (that the client hoped for) and

the actual completion time (when our chef will finally complete the client’s dish).

e) (0.5p) Determine if there are orders that remain incomplete after the closing time of the

restaurant.

Ex: N = 6, T = 20 and the orders are:

t = 0, d =5

t = 1, d = 3

t = 10, d = 3

t = 11, d = 2

t = 12, d = 4

t = 18, d =5

Order 1: expected completion time = 5, actual completion time = 5;

Order 2: expected completion time = 4, actual completion time = 8;

The chef takes a break (the queue is empty) between the times 8 and 10

We have T = 20. After computing the orders, we find out that the last one will be finished at

t=24. Therefore, we have orders which are completed after the closing of the restaurant.
