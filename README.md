
# Piramide Fibonnaci
In college  my professor challenge the class to figure out how to print the following text in C:

> 1 
>
> 4 6
>
> 9 11 13 
>
> 17 19 21 23

It started when i friend of mine send a meme on the group chat: 

![thumb_how-are-your-days-going-take-a-break-enjoy-this-72517782](https://user-images.githubusercontent.com/87271192/190916256-3df6e4d6-e475-4de9-94f7-637deac57106.png)


After this my professor assign the problem for us to resolve.
At first look it doenst seen to have a pattern, but i started looking for it anyway, its clear that which row has its relative numbers count,for example, the first row has only one number, the second row has two number, and so on.
And the growth from the left to right its by adding two, four to six increased two, for example, so only its left to find its the pattern of growth from one line to another.
searching for it i first tough of Pascal Piramid, only because its shape.
but then I noticed the pattern, from one to four increase by **three**, from for four to nine increase by **five**, from nine to seventeen increase by **eight**.
so its pattern was 3, 5, 8
and the Fibonnaci sequence was exactly that:

> In mathematics, the  **Fibonacci numbers**, commonly denoted  _Fn_, form a  sequence, the  **Fibonacci sequence**, in which each number is the sum of the two preceding ones. The sequence commonly starts from 0 and 1, although some authors omit the initial terms and start the sequence from 1 and 1 or from 1 and 2. Starting from 0 and 1, the next few values in the sequence are:
> 
>0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

So i started the code, but i decide to let the user determinate its origin number and quantity of rows.
