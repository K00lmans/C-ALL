# C-ALL
*A very terrible programming language where everything is called all at once and everything is a string*

## Overview
On February 5th 2026, I had a very bad idea. That idea was a language in which whenever you called a function, it called **every single function** and returned the results of every single one that did not fail outright. This was very funny to me, and so, of course, I piled on with the idea that the only data type is strings. Then I imagined recursive functions, and it was at that moment that I committed myself to making this a reality. This is what this is. A project to the insanity of man and the treasons we have commited by teaching and to think.

## A Crash Course
So, you might be asking, how does this work exactly? It's quite simple, really. At its core, it's C. In fact, because writing a custom compiler is an insane job for a meme language, it's actually C/C++ under the hood, as you might be able to tell from a precautionary glance at the repo. Of course, its pretty different in two big ways.
### 1. Types
Well, the only data type you get to work with is strings. As such, you don't need to specify type or anything since we all know it's a string. Now, what flavor of strings do we use? It's C strings. I told you it's C. Get with the program or you well never program in this. The way it works is every single string ends with a null character, `\0`. Whenever you put in multiple strings as input or get multiple back as output, it becomes one megastring, with the only way to tell where one begins and one ends is the null character. How do you tell when the last string is? You don't. This lets us have every function take one input and give one output. This is good because...
### 2. `call()`
While C-ALL (not now lol) has plenty of functions, you can't call any of them yourself. You instead have to use `call()`. This specific little function "calls" all other functions in the language, as well as any you choose to make. Someday, I might make this task multithreaded. You put whatever inputs you want into it, and it will output every single output from every single function, except those that fail, of course. Function crashing is, in fact, a core part of C-ALL as it reduces the number of commands run when `call()` and reduces the risk of an infinite loop. Everything happens at once, and you have to parse your way through it all

## How to Write and Run C-ALL Code
I would love to tell you, but uh, you can't right now because I am still making it. So shoo. Also, are you ok? Like, why would you want to use this?

## How Can I Help?
First, please make sure you check the following boxes:
- [x] I am clinically insane

Ok, all good? Well, great, happy to have you.

In this section, I would go into more detail about how everything works, but really, there is not enough here for that. So, if you really do desperately want to work on this, uh, just message me and I will dump all of the forbidden knowledge on you.

## Repository Info
![GitHub contributors](https://img.shields.io/github/contributors/k00lmans/C-ALL)
![GitHub License](https://img.shields.io/github/license/k00lmans/C-ALL)
