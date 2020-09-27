# CS 1320: Coding Challenge #2

Well, this is an interesting one.

Do you know about [Blood Pressure](https://www.heart.org/en/health-topics/high-blood-pressure/understanding-blood-pressure-readings)? It is one of those measurements you get at a clinic or the hospital, and is used to monitor your cardiovascular health. Hypertension can be a sign of many issues, so it is important to identify whether a reading belongs to one of multiple categories.

Blood pressure is measured with two numbers: Systolic Pressure, or the pressure when the heart pumps blood through the arteries, and Diastolic Pressure, which is the pressure of the blood in between heartbeats. The following chart, taken from [The American Heart Association website](https://www.heart.org/en/health-topics/high-blood-pressure/understanding-blood-pressure-readings), shows the measurements and the categories they belong to:

**CATEGORY** | **SYSTOLIC** | | **DIASTOLIC**
-------------|--------------|-|--------------
Normal | < 120 | and | < 80
Elevated | 120-129 | and | <80
Stage 1 Hypertension | 130-139 | or | 80-89
Stage 2 Hypertension | > 140 | or | > 90
Hypertensive Crysis | > 180 | and/or | >120

I will provide you with a basic `main.c` file that covers the Normal category, based on a user's input.

## THE CHALLENGE
This week's challenge is simple:

1. **Complete the `main.c` file** with code that prints out the Blood Pressure Category based on the user's readings, plus one more: If the user's Systolic pressure is *less than* their Diastolic pressure, it should just print `"ERROR"`.
2. The Challenge, in this case, is to do it with **the minimum amount of `if-statements` possible**. It turns out that if statements can be computationally expensive, so minimizing the number of them can be efficient, particularly if you plan to implement such a code in a simple device that has a weak processor and small memory.

## THE DELIVERABLES

You have to turn in:

1. **Your complete `main.c` file**. It should be able to properly identify all above Blood Pressure cases, and it should have comments that clarify the code when necessary.
2. **A small report**. You can find the format for this report in the `REPORT.md` file. In this report, you must explain your reasoning for the number of if statements used, as well as any ideas you do not know how to implement, but you believe to be possible, on how to reduce the number of if statements in the code.

## THE GRADING RUBRIC

#### Code quality for `main.c`:
Rubric | Points
-------|-------
Code properly covers all cases | 60
Code covers most cases but fails in some tests | 50
Code doesn't compile/run but the logic is sound, in general | 40
Code doesn't compile/run, or is missing too much logic | 10-30

#### Coding style for `main.c`:
Rubric | Points
-------|-------
Code has readable variable names, clear comments, readable formatting | 10
Some variable names and comments are unclear | 8
Variable names are confusing, the code overall is hard to read | 1-5

#### Quality for `REPORT.md` file:
Rubric | Points
-------|-------
The report is well written, with clear and structured ideas, and shows creative reasoning in attempting to solve the challenge | 30
The report is a bit unclear/unstructured, with some solid reasoning and experimentation | 25
The report is poorly written, repetitive, or presents shallow ideas  | 10-15
The report is *literally just a sentence*. | 5
