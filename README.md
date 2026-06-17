# Civil Engineering C++ Practice Modules

Welcome to this digital repository tracking my foundational journey in programming, algorithmic optimization, and structural logic automation. This repository serves as a practical bridge between core civil engineering principles and computational execution.

---

## Included Projects

### 1. Cantilever Beam Bending Moment Calculator (`cantilever_beam_calc.cpp`)
* **Purpose:** A structural analysis utility designed to calculate and map the bending moment at user-specified intervals along a fixed cantilever beam subjected to a point load at its free end.
* **Mathematical Foundation:** Evaluates the standard static equilibrium equation:
  $$M(x) = P \times (L - x)$$
  Where:
  * $P$ = Point load magnitude
  * $L$ = Total span length of the beam
  * $x$ = Distance from the fixed support to the evaluation point
* **Core Concepts:** Input/output stream handling, mathematical execution, algebraic sequencing, and dimensional tracking.

### 2. Logic Optimization Exercise (`fizzbuzz_practice.cpp`)
* **Purpose:** An optimization task resolving structural loop conditions, evaluating numeric patterns, and managing logic tree prioritization.
* **Core Concepts:** For-loops, conditional chaining (`if-else if`), modulus operations, and clean control-flow structuring.

---

## Technical Stack & Environment

* **Language:** C++ (C++11 standard or higher)
* **Compiler Compatibility:** GCC / MinGW, Clang, or MSVC
* **Paradigm:** Procedural programming with a focus on algorithmic efficiency

---

## Getting Started

### Prerequisites
To compile and execute these modules, you need a C++ compiler installed on your system. 

* **Windows:** MinGW or Visual Studio
* **macOS:** Xcode Command Line Tools (`clang++`)
* **Linux:** `g++` (GNU Compiler Collection)

### Compilation and Execution

Navigate to the repository root directory in your terminal and run the following commands:

#### For the Cantilever Beam Calculator:
```bash
# Compile the source code
g++ -o cantilever_beam_calc cantilever_beam_calc.cpp

# Run the executable
./cantilever_beam_calc
