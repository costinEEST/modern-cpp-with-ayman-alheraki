# ASan debugging rules

| Rule                          | Why                |
| ----------------------------- | ------------------ |
| Use `-O1`                     | Cleaner stacks     |
| Use `-fno-omit-frame-pointer` | Required           |
| Don’t strip symbols           | (`-g` needed)      |
| Use LLDB                      | Best Clang pairing |


# JS → C++ mapping

| JS world           | C++ world        |
| ------------------ | ---------------- |
| ESLint autofix     | clang-tidy fixes |
| Prettier           | clang-format     |
| Runtime exceptions | ASan             |
| Chrome DevTools    | LLDB + ASan      |


# Test the setup 

```cpp 
// test.cpp

#include <format>
#include <iostream>

int main() {
    std::cout << std::format("Answer = {}\n", 42);
}
```

# CLI 

```shell 
clang++ hello.cpp -o hi
./hi 

Cmd + Shift + B 
./test
```

# Wiki 

- https://simplifycpp.org/books/Book1_Getting_Started_with_Modern_CPP.pdf

- https://www.linkedin.com/pulse/from-pre-2011-c-modern-c11-c26-ayman-alheraki-ecyzc
- https://www.linkedin.com/pulse/does-c-deserve-21-volume-encyclopedia-ayman-alheraki-asjvf
- https://www.linkedin.com/pulse/iso-c-core-guidelines-ayman-alheraki-fwqpf
- https://www.linkedin.com/pulse/modern-c-encyclopedia-preface-simplifycpp-c7n8f
- https://www.linkedin.com/pulse/mastering-modern-cmake-fast-reference-guide-ayman-alheraki-i0jvc
- https://www.linkedin.com/pulse/git-c-developers-small-practical-edition-ayman-alheraki-quvec
- https://www.linkedin.com/pulse/understanding-compilation-pipeline-c-preprocessing-parsing-alheraki-oqhqf
- https://www.linkedin.com/pulse/memory-management-modern-c-concise-guide-ayman-alheraki-nnbrf
- https://www.linkedin.com/pulse/c-true-successor-both-simula-ayman-alheraki-qj6nf
- https://www.linkedin.com/pulse/why-i-insist-using-c-all-my-projects-especially-ayman-alheraki-wmplf
- https://www.linkedin.com/pulse/what-we-rebuilt-c-from-scratch-ayman-alheraki-foitf
- https://www.linkedin.com/pulse/why-javascript-engines-written-c-ayman-alheraki-krcjf
- https://www.linkedin.com/pulse/c-language-refuses-tamed-youre-ready-depth-step-aside-alheraki-rhthf
- https://www.linkedin.com/pulse/mastering-hardest-topics-c-ayman-alheraki-09eyf
- https://www.linkedin.com/pulse/best-assembler-learn-x86-arm-risc-v-ayman-alheraki-zbxdf
- https://www.linkedin.com/pulse/mastering-modern-c23-complete-guide-latest-standard-ayman-alheraki-wicuf
- https://www.linkedin.com/pulse/c-programming-c23-deep-dive-modern-power-systems-classic-alheraki-xbhtf
- https://www.linkedin.com/pulse/mastering-c-through-leetcode-best-practices-real-skill-ayman-alheraki-rjfsf
- https://www.linkedin.com/pulse/low-level-programming-llvm-revolution-universal-all-ayman-alheraki-wbtff
- https://simplifycpp.org/?id=a0906
- https://www.linkedin.com/pulse/right-mindset-learning-c-language-creators-advice-ayman-alheraki-nzkbf
