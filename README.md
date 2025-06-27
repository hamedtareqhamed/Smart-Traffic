# Traffic Light Green Time Calculator

A simple C++ program that calculates green-light durations for traffic intersections based on real-time vehicle counts.

---

## Table of Contents

- [Program Features](#program-features)
- [Usage Steps](#usage-steps)
- [Example Workflow](#example-workflow)
- [Run Online](#run-online)

---

## Program Features

- **Dynamic Light Count**: Supports 2–4 traffic lights per intersection.
- **Custom Labels**: Accepts any short label (e.g., `N`, `North`, `East`).
- **Real-Time Sorting**: Automatically orders lights from least to most vehicles.
- **Adaptive Timing**: Computes green time as a base of 15 seconds plus 10 seconds per vehicle.
- **Clear Output**: Displays each light name with its calculated green duration.

## Usage Steps

1. **Enter Number of Lights**: Input an integer between 2 and 4.
2. **Label Each Light**: Provide a short name for each traffic light (e.g., `N`, `East`).
3. **Enter Vehicle Counts**: Type the number of vehicles waiting at each light.
4. **View Results**: The program sorts the lights by traffic volume and prints the green time for each.

## Example Workflow

```plaintext
how many side: 3

name the traffic light number 1: eg. N, North etc..  N

How many cars in traffic light N? 5

name the traffic light number 2: eg. N, North etc..  E

How many cars in traffic light E? 2

name the traffic light number 3: eg. N, North etc..  W

How many cars in traffic light W? 4

1- light E will be green for 35 seconds
2- light W will be green for 55 seconds
3- light N will be green for 65 seconds
```

## Run Online

Try the program in your browser using the Programiz C++ compiler: [Run Online](https://www.programiz.com/online-compiler/7oVo3enVrE5xb)

