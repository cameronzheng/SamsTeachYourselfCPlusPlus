# Lesson 6: Controlling Program Flow

### Summary
This lesson teaches how to code conditional statements that create alternative execution paths and make code blocks repeat in a loop. You learned the `if...else` construct and how to use `switch-case` statements to handle different situations in the event that variables contain different values.

In learning about loops, you saw how to use `while`, `do...while`, and `for` constructs. You learned how to make the loops iterate endlessly to create infinite loops and to use `continue` and `break` to better control them. Last but not least, you learned about `goto` -- but were warned against using it due to its ability to create code that cannot be understood.

## Q&A
### Q: What happens if I omit a `break` in a `switch-case` statement?
The `break` statement enables program exeuction to exit the `switch` construct. Without it, execution continues evaluating the following `case` statements.

### Q: My `while` loop looks like `while(Integer)`. Does the `while` loop exeucte when `Integer` evaluates to `-1`?
Ideally, a `while` expression should evaluate to a Boolean value `true` or `false`. `false` is `0`. A condition that does not evaluate to `0` is considered to evaluate to `true`. Because `-1` is not `0`, the `while` condition evaluates to `true`, and the loop is executed. If you want the loop to be executed only for positive numbers, you can use the expression `while(Integer > 0)`. This rule is treu for all conditional statements and loops.

# WorkShop
## Quiz
1. Why should you bother to indent code within statement blocks, nested `ifs`, and nested loops when it compiles even without indentation?
2. You can implement a quick fix using `goto`. Why would you want to avoid it?
3. Is it possible to write a `for` loop where the counter decrements? How would it look?
4. What is the problem with the following loop?

`for (int counter = 0; counter == 10; ++counter) `

`   cout << counter << " ";`

1. Indenting code allows for more readable code for humans who might need to read or understand your code.
2. You would want to avoid `goto` since it can make your code unintuitive/confusing and expensive to maintain.
3. Yes, you would have to adjust the ending condition as well as the condition that executes at the end of every loop.
4. The problem with the following code is that the condition is always evaluated to false, therefore, never executing.

