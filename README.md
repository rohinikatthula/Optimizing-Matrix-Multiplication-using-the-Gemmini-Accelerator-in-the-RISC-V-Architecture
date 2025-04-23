# Optimizing-Matrix-Multiplication-using-the-Gemmini-Accelerator-in-the-RISC-V-Architecture


## Overview:
This project focuses on accelerating matrix multiplication—a core operation in many machine learning and signal processing applications—using the Gemmini hardware accelerator integrated within the RISC-V architecture. By leveraging Gemmini, the goal is to achieve significant performance improvements over traditional software-based matrix multiplication executed on a CPU.

## Motivation:

Matrix multiplication is foundational in fields such as:

> Neural networks

> Computer graphics

> Scientific simulations

However, it's also computationally intensive. Hardware accelerators like Gemmini are designed to optimize these dense tensor computations, particularly within embedded or low-power systems powered by RISC-V processors.

## Objectives
1. Design and implement an optimized matrix multiplication algorithm using Gemmini.

2. Compare performance against a baseline CPU implementation on RISC-V.

3. Explore optimization techniques, including memory tiling and instruction scheduling.

4. Evaluate across varying matrix sizes to understand scalability and efficiency.

5. Utilize RISC-V toolchain and Chipyard ecosystem for development and simulation.

## Tools & Technologies:
> Gemmini Accelerator

> RISC-V Toolchain

> Chipyard Ecosystem

> QEMU (RISC-V Emulation)

> VSCode with IntelliSense

> C/C++ (RISC-V Targeted)

## Implementation Steps
1. Set up RISC-V Toolchain

> Install dependencies, clone and build the RISC-V GNU Toolchain.

> Configure environment variables.

2. Clone & Configure Chipyard

> Resolve GitHub PAT issues and submodule errors.

> Locate Gemmini headers in chipyard/generators/gemmini/include.

3. Baseline Implementation

> Write and test matrix multiplication in C++ for RISC-V CPU.

4. Accelerated Implementation

> Integrate Gemmini API for hardware-accelerated computation.

> Compile using appropriate include paths and RISC-V GCC.

> Run using QEMU emulator.

5. Troubleshooting

> Resolve include path issues, GitHub authentication, submodule errors.

> Fix IntelliSense pathing in c_cpp_properties.json.

6. Testing & Evaluation

> Measure performance (execution time, memory) for different matrix sizes.
## Issues Faced:
a. Toolchain setup complications.

b. GitHub authentication during Chipyard cloning.

c. Missing headers and incorrect include paths.

d. Proxy Kernel (PK) setup and compatibility issues.

e. Memory management challenges during simulation.
## Future Work:
a. Fully resolve PK-related issues.

b. Apply advanced optimizations for performance.

c. Deploy the implementation on physical FPGA boards for real-world evaluation.
