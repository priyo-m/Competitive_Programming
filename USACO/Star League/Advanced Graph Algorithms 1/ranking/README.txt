Ranking the Cows
================

Each of Farmer John's N cows (1 <= N <= 1,000) produces milk at a
different positive rate, and FJ would like to order his cows according
to these rates from the fastest milk producer to the slowest.

FJ has already compared the milk output rate for M (1 <= M <= 10,000)
pairs of cows.  He wants to make a list of C additional pairs of
cows such that, if he now compares those C pairs, he will definitely
be able to deduce the correct ordering of all N cows.  Please help
him determine the minimum value of C for which such a list is
possible.

PROBLEM NAME: ranking

INPUT FORMAT:

* Line 1: Two space-separated integers: N and M

* Lines 2..M+1: Two space-separated integers, respectively: X and Y.
       Both X and Y are in the range 1...N and describe a comparison
       where cow X was ranked higher than cow Y.

SAMPLE INPUT:

5 5
2 1
1 5
2 3
1 4
3 4

INPUT DETAILS:

FJ is comparing 5 cows and has already determined that cow 2 > cow
1, cow 1 > cow 5, cow 2 > cow 3, cow 1 > cow 4, and cow 3 > cow 4
(where the '>' notation means "produces milk more quickly").

OUTPUT FORMAT:

* Line 1: A single integer that is the minimum value of C.

SAMPLE OUTPUT:

3

OUTPUT DETAILS:

From the information in the 5 test results, Farmer John knows that
since cow 2 > cow 1 > cow 5 and cow 2 > cow 3 > cow 4, cow 2 has
the highest rank. However, he needs to know whether cow 1 > cow 3
to determine the cow with the second highest rank. Also, he will
need one more question to determine the ordering between cow 4 and
cow 5. After that, he will need to know if cow 5 > cow 3 if cow 1
has higher rank than cow 3. He will have to ask three questions in
order to be sure he has the rankings: "Is cow 1 > cow 3?  Is cow 4
> cow 5? Is cow 5 > cow 3?"
