# finitediff_central -- Central Finite Difference Method

### Install
```
clib install hcnn/finitediff_central
```

### Run Test Skrip
Run `test.c` via

```
make
```

### Use typedef for the function pointer
In your application you can use `typedef` to declare the function pointer. 

```
typedef double (*FUNC_PTR)(const double *, size_t);
...
int main(...){
    FUNC_PTR evalfunc = &myfunc;
    ...
}
```

I did not implemented here because the `typedef` should be declared at some other level.

