# C++ BMR Calculator

## About This Project

This is a straightforward, single-file C++ console application designed to calculate a user's Basal Metabolic Rate (BMR) based on the Mifflin-St Jeor equation.

The program prompts the user for several inputs:
* Sex (M or F)
* Age (in years)
* Height (in cm)
* Weight (in kg)
* Activity Factor (on a scale of 1-5)

It first calculates the BMR using the appropriate Mifflin-St Jeor formula for the user's sex. It then adjusts this BMR based on the provided activity level (using a `switch` statement) to give a rough estimate of total daily calorie needs.

## My Learning Journey

This little program is part of a personal "mini project daily challenge" I'm doing to improve my coding skills.

This was a good exercise for getting to grips with C++ for the first time. I'm pleased to say that no generative AI was consulted for the writing of the C++ code; this was all done the old-fashioned way, with grit and a compiler.
The same cannot be said for this readme as I am not a great writer but hopefully in time - I too will improve at this

The main concepts I practised here were:
* Handling basic user input with `std::cin` and `std::cout`.
* Using `if/else` statements to select the correct formula.
* Implementing a `switch/case` block to manage the different activity multipliers.

It's simple, but it works.
