A Kelvin to RGB conversion table in ANSI C

I'm learning C and this was a quick learning project, so code quality may not be up to par.
Algorithm comes from [Tanner Helland](https://tannerhelland.com/2012/09/18/convert-temperature-rgb-algorithm-code.html).
The white point comes out to 6600k.

# Usage

`MAX` is the upper limit of the table, I've set it to 10 000k for the sake of brevity but it works up until 40 000k.
`STEP` is the increase in temperature after each iteration, increase or decrease based on the granularity you want

# TO-DO (Potentially)

* Less ugly formatting
* Interactive mode
* Ability to take arguments
* Adjustable white point
