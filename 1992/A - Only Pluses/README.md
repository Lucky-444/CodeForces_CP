<h2><a href="https://codeforces.com/contest/1992/problem/A" target="_blank" rel="noopener noreferrer">1992A — Only Pluses</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1992A](https://codeforces.com/contest/1992/problem/A) |

## Topics
`brute force` `constructive algorithms` `greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Only Pluses</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Kmes has written three integers $$$a$$$, $$$b$$$ and $$$c$$$ in order to remember that he has to give Noobish_Monk $$$a \times b \times c$$$ bananas.</p><p>Noobish_Monk has found these integers and decided to do the following <span class="tex-font-style-bf">at most $$$5$$$ times</span>:</p><ul> <li> pick one of these integers; </li><li> increase it by $$$1$$$. </li></ul><p>For example, if $$$a = 2$$$, $$$b = 3$$$ and $$$c = 4$$$, then one can increase $$$a$$$ three times by one and increase $$$b$$$ two times. After that $$$a = 5$$$, $$$b = 5$$$, $$$c = 4$$$. Then the total number of bananas will be $$$5 \times 5 \times 4 = 100$$$.</p><p>What is the maximum value of $$$a \times b \times c$$$ Noobish_Monk can achieve with these operations?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line of input contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. The description of the test cases follows.</p><p>The first and only line of each test case contains three integers $$$a$$$, $$$b$$$ and $$$c$$$ ($$$1 \le a, b, c \le 10$$$) — Kmes's integers.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the maximum amount of bananas Noobish_Monk can get.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008797863049958871" id="id009558421706970424" class="input-output-copier">Copy</div></div><pre id="id008797863049958871"><div class="test-example-line test-example-line-even test-example-line-0">2</div><div class="test-example-line test-example-line-odd test-example-line-1">2 3 4</div><div class="test-example-line test-example-line-even test-example-line-2">10 1 10</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007438090643598081" id="id008975726239388393" class="input-output-copier">Copy</div></div><pre id="id007438090643598081">100
600
</pre></div></div></div>