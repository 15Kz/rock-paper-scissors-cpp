# Rock Paper Scissors (C++)

A simple console Rock Paper Scissors game. You type the word of your choice,
the computer picks randomly, and the program compares the two.

## What I practiced
- Storing choices in a `vector<string>`
- Random numbers with `<random>` (`random_device`, `mt19937`, `uniform_int_distribution`)
- `while` loops and `if / else if / else`
- Reading input with `cin`

## How it works
1. The program shows the choices: Rock, Paper, Scissor.
2. You type the WORD of your choice (not a number).
3. The computer randomly picks Rock, Paper, or Scissors.
4. The program compares the two and prints a tie, a win, or a loss.
5. The game repeats.

## How to play
- Type exactly one of: Rock, Paper, Scissor
- Capitalization matters (type "Rock", not "rock")
- Numbers do not work

## How to run
Compile with g++ (for example: g++ main.cpp -o rps), then run the program.

## Known issues (why this version is flawed)

1. **Spelling mismatch: "Scissors" vs "Scissor".**
   The computer's list stores "Scissors" (with an s), but the win check and the
   prompt use "Scissor" (no s). Because the two never match, Rock can never beat
   the computer's Scissors, and Scissor vs Scissors is never counted as a tie.
   If you type "Scissors" (with the s) you can tie, but you lose to Paper
   because your input doesn't match "Scissor" in the win check.

2. **The game never ends.**
   `while (true)` has no exit option or `break`, so the only way to stop it is
   to close the program.

3. **Messy output.**
   The results are printed without a newline, so "You win!" runs straight into
   the next prompt. The program also never shows what the computer picked, so
   the player can't tell why they won or lost.

4. **The random generator is rebuilt every round.**
   `random_device`, `mt19937`, and the distribution are created inside the loop.
   They only need to be created once, before the loop.

5. **No input validation.**
   Anything the player types is accepted, and the input is case-sensitive.
   A wrong word is treated as a loss instead of asking the player to try again.
   If the input stream fails, the loop can spin forever.

## Planned fixes
- Make the spelling consistent everywhere ("Scissors" or "Scissor", not both)
- Add an exit option and validate input
- Show the computer's choice and add newlines
- Move the random setup outside the loop
- Keep a win/loss/tie score

## Author
First-year BSIT student, relearning/learningPython and C++ step by step.
