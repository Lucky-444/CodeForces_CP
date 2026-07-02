<h2><a href="https://codeforces.com/contest/1995/problem/A" target="_blank" rel="noopener noreferrer">1995A — Diagonals</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1995A](https://codeforces.com/contest/1995/problem/A) |

## Topics
`brute force` `greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Diagonals</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vitaly503 is given a checkered board with a side of $$$n$$$ and $$$k$$$ chips. He realized that all these $$$k$$$ chips need to be placed on the cells of the board (no more than one chip can be placed on a single cell).</p><p>Let's denote the cell in the $$$i$$$-th row and $$$j$$$-th column as $$$(i ,j)$$$. A diagonal is the set of cells for which the value $$$i + j$$$ is the same. For example, cells $$$(3, 1)$$$, $$$(2, 2)$$$, and $$$(1, 3)$$$ lie on the same diagonal, but $$$(1, 2)$$$ and $$$(2, 3)$$$ do not. A diagonal is called occupied if it contains at least one chip. </p><p>Determine what is the minimum possible number of occupied diagonals among all placements of $$$k$$$ chips.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of several sets of input data. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 500$$$) — the number of sets of input data. Then follow the descriptions of the sets of input data.</p><p>The only line of each set of input data contains two integers $$$n$$$, $$$k$$$ ($$$1 \le n \le 100, 0 \le k \le n^2$$$) — the side of the checkered board and the number of available chips, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each set of input data, output a single integer — the minimum number of occupied diagonals with at least one chip that he can get after placing all $$$k$$$ chips.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001337421894669717" id="id0009597842696686443" class="input-output-copier">Copy</div></div><pre id="id001337421894669717"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1 0</div><div class="test-example-line test-example-line-even test-example-line-2">2 2</div><div class="test-example-line test-example-line-odd test-example-line-3">2 3</div><div class="test-example-line test-example-line-even test-example-line-4">2 4</div><div class="test-example-line test-example-line-odd test-example-line-5">10 50</div><div class="test-example-line test-example-line-even test-example-line-6">100 239</div><div class="test-example-line test-example-line-odd test-example-line-7">3 9</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009315512146040399" id="id001385242414231761" class="input-output-copier">Copy</div></div><pre id="id009315512146040399">0
1
2
3
6
3
5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there are no chips, so 0 diagonals will be occupied. In the second test case, both chips can be placed on diagonal $$$(2, 1), (1, 2)$$$, so the answer is 1. In the third test case, 3 chips can't be placed on one diagonal, but placing them on $$$(1, 2), (2, 1), (1, 1)$$$ makes 2 diagonals occupied. In the 7th test case, chips will occupy all 5 diagonals in any valid placing.</p></div>