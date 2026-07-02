<h2><a href="https://codeforces.com/contest/2007/problem/A" target="_blank" rel="noopener noreferrer">2007A — Dora's Set</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2007A](https://codeforces.com/contest/2007/problem/A) |

## Topics
`greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Dora's Set</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Dora has a set $$$s$$$ containing integers. In the beginning, she will put all integers in $$$[l, r]$$$ into the set $$$s$$$. That is, an integer $$$x$$$ is initially contained in the set if and only if $$$l \leq x \leq r$$$. Then she allows you to perform the following operations:</p><ul> <li> Select three <span class="tex-font-style-bf">distinct</span> integers $$$a$$$, $$$b$$$, and $$$c$$$ from the set $$$s$$$, such that $$$\gcd(a, b) = \gcd(b, c) = \gcd(a, c) = 1^\dagger$$$. </li><li> Then, remove these three integers from the set $$$s$$$. </li></ul><p>What is the maximum number of operations you can perform?</p><p>$$$^\dagger$$$Recall that $$$\gcd(x, y)$$$ means the <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor</a> of integers $$$x$$$ and $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 500$$$) — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains two integers $$$l$$$ and $$$r$$$ ($$$1 \leq l \leq r \leq 1000$$$) — the range of integers in the initial set.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the maximum number of operations you can perform.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016096182820217875" id="id006522220511522534" class="input-output-copier">Copy</div></div><pre id="id0016096182820217875"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">1 3</div><div class="test-example-line test-example-line-even test-example-line-2">3 7</div><div class="test-example-line test-example-line-odd test-example-line-3">10 21</div><div class="test-example-line test-example-line-even test-example-line-4">2 8</div><div class="test-example-line test-example-line-odd test-example-line-5">51 60</div><div class="test-example-line test-example-line-even test-example-line-6">2 15</div><div class="test-example-line test-example-line-odd test-example-line-7">10 26</div><div class="test-example-line test-example-line-even test-example-line-8">1 1000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0021873501956734265" id="id000012879598447350649" class="input-output-copier">Copy</div></div><pre id="id0021873501956734265">1
1
3
1
2
3
4
250
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can choose $$$a = 1$$$, $$$b = 2$$$, $$$c = 3$$$ in the only operation, since $$$\gcd(1, 2) = \gcd(2, 3) = \gcd(1, 3) = 1$$$, and then there are no more integers in the set, so no more operations can be performed.</p><p>In the second test case, you can choose $$$a = 3$$$, $$$b = 5$$$, $$$c = 7$$$ in the only operation.</p><p>In the third test case, you can choose $$$a = 11$$$, $$$b = 19$$$, $$$c = 20$$$ in the first operation, $$$a = 13$$$, $$$b = 14$$$, $$$c = 15$$$ in the second operation, and $$$a = 10$$$, $$$b = 17$$$, $$$c = 21$$$ in the third operation. After the three operations, the set $$$s$$$ contains the following integers: $$$12$$$, $$$16$$$, $$$18$$$. It can be proven that it's impossible to perform more than $$$3$$$ operations.</p></div>