# 🎮 Tic Tac Toe Game in C

This is a simple console-based **Tic Tac Toe** game written in C.  
You can play against a computer that selects moves randomly.  

---

## 🧠 Features

- Player vs Computer mode
- Clear 3x3 matrix board display
- Input validation
- Win/draw detection
- Computer uses random strategy

---

## 💻 How to Compile & Run

Make sure you have a C compiler (GCC) installed. Then run:

```bash
gcc tic_tac_toe.c -o ttt
./ttt          # On Windows: ttt.exe
```

The board is numbered `1`–`9`. On your turn, type the number of the cell you want
to mark with **X**. The computer then plays **O** on a random free cell.

---

## 🎯 Example Run (Demo)

A real game where the player wins across the **top row**. User input below was
`1`, `2`, `3` (the computer's `O` moves are chosen randomly each turn):

```text
Tic Tac Toe Game

Your move (X) - Computer's move (O)


     |     |
  1  |  2  |  3
_____|_____|_____
     |     |
  4  |  5  |  6
_____|_____|_____
     |     |
  7  |  8  |  9
     |     |

Your turn, enter the your choice: Computer's turn finished


     |     |
  X  |  2  |  3
_____|_____|_____
     |     |
  4  |  5  |  O
_____|_____|_____
     |     |
  7  |  8  |  9
     |     |

Your turn, enter the your choice: Computer's turn finished


     |     |
  X  |  X  |  3
_____|_____|_____
     |     |
  4  |  5  |  O
_____|_____|_____
     |     |
  7  |  8  |  9
     |     |

Your turn, enter the your choice:
    GAME OVER
 _________________
|                 |
|  X  |  X  |  X  |
|_____|_____|_____|
|     |     |     |
|  4  |  5  |  O  |
|_____|_____|_____|
|     |     |     |
|  7  |  8  |  9  |
|_________________|
Winner:User
End of the game!
```

> 💡 Because the computer picks a random free cell each turn, every game plays out
> differently — re-run it to get a new match.
