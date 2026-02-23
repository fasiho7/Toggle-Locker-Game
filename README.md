# 🎮 Tic Tac Toe Game

A complete Tic Tac Toe game implementation in C with player vs player functionality, menu system, and game statistics.

## 🎯 Features

- **Player vs Player** gameplay
- **Interactive Menu System**
- **Game History Tracking**
- **Statistics Display**
- **Input Validation**
- **Clean User Interface**

## 🚀 How to Run

### Prerequisites
- C compiler (GCC, Clang, or any standard C compiler)
- Terminal/Command Prompt

### Compilation
```bash
gcc "25p-0603_FasihZeeshan,_BSCS-1A.c.c" -o tic-tac-toe
```

### Execution
```bash
./tic-tac-toe
```

Or on Windows:
```bash
tic-tac-toe.exe
```

## 🎮 Game Controls

### Main Menu
1. **Start the game** - Begin a new Tic Tac Toe match
2. **Search Game History** - View previous game results
3. **Show Statistics** - Display win/loss statistics
4. **Exit** - Close the application

### Gameplay
- Players take turns entering positions (1-9)
- Player 1 uses 'X', Player 2 uses 'O'
- First to get 3 in a row (horizontal, vertical, or diagonal) wins
- Game detects draws and invalid moves

## 📁 Project Structure

```
├── 25p-0603_FasihZeeshan,_BSCS-1A.c.c    # Main source file
├── 25p-0603_FasihZeeshan,_BSCS-1A.c.exe    # Compiled executable (Windows)
└── README.md                               # This file
```

## 🎯 Game Board Layout

```
 1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 
```

Players enter numbers 1-9 to place their marks on the board.

## 📊 Features Details

### 🎮 Game Mechanics
- **Turn-based gameplay** between two players
- **Input validation** to prevent invalid moves
- **Win detection** for all possible winning combinations
- **Draw detection** when board is full with no winner

### 📈 Statistics & History
- **Game tracking** - Records all played games
- **Win/loss counting** - Maintains player statistics
- **History search** - Browse previous game results

### 🎨 User Interface
- **Clean menu system** with numbered options
- **Clear board display** after each move
- **Color-coded players** (X and O)
- **Intuitive input prompts**

## 🛠️ Technical Details

### Language & Compiler
- **Language**: C
- **Standards**: C99 compatible
- **Compiler**: GCC/Clang recommended

### Key Functions
- `main()` - Main game loop and menu system
- Game state management
- Input validation and processing
- Board rendering and updates

## 🎓 Educational Value

This project demonstrates:
- **Basic C programming concepts**
- **Array manipulation** (game board)
- **Control flow** (loops, conditionals)
- **User input handling**
- **Function organization**
- **Game state management**

## 🤝 Contributing

Feel free to:
- Report bugs or issues
- Suggest improvements
- Add new features (AI opponent, network play, etc.)

## 📝 Author

**Name:** Fasih Zeeshan  
**Class:** BSCS-1A  
**Roll Number:** 25p-0603  
**Project:** Tic Tac Toe Game (Project 1)

---

🎮 **Enjoy playing Tic Tac Toe!** 🎮
