# CS-3353-Spring-2024---Quicksort-Variants
A project implementing and analyzing four variations of the Quicksort algorithm for CS 3353 Spring 2024.

CS 3353 Spring 2024 - Quicksort Variants
This repository contains the implementation of four different variations of the Quicksort algorithm, as part of a CS 3353 assignment for Spring 2024. The goal of the project was to explore and analyze the performance of Quicksort under different configurations and stopping conditions.

Features
Vanilla Quicksort: Basic implementation of Quicksort sorting objects in descending order.
Quicksort with Pivot Selection: Chooses the median of the last three elements as the pivot for improved partitioning.
Quicksort with Early Recursion Stop (k): Stops recursion for subarrays of size k or smaller, applying Insertion Sort instead.
Quicksort with Early Recursion Stop (p): Adjusts stopping condition based on a fraction p of the original array size, using Insertion Sort when the subarray size meets the threshold.
Analysis
Includes an analysis of the different variations' performance in terms of the number of comparisons made while sorting, tested across various input sizes. The analysis is presented in Analysis.pdf, along with:

Tables of comparison data for input sizes ranging from 1000 to 15000.
Graphs showing the relationship between input size and the number of comparisons (both linear and logarithmic scales).
Getting Started
Implementations of Quicksort can be found in QuickSort.cpp.
The analysis data and visualizations are available in Analysis.pdf.
