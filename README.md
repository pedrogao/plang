# plang

> simple typescript implement by typescript!

```sh
cd ./src/rt && gcc -c -O2 *.c && cd ../../
npm run main -- --dumpAsm ./scripts/unary.ts
gcc -o unary ./scripts/unary.s ./src/rt/*.o
```

```sh
rm ./src/rt/*.o
rm ./scripts/*.s
```
