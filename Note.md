### Const Cast
+ Only use when the referred object/variable is not a const
+ When dealing with a 3rd party library or API that is not const

### Static Cast
+ It performs implicit conversions between types
+ we also use this type of cast when the conversion between types is provided through conversion operator/constructor.
it is important to use this type of cast in this situation so that what is going on is easily recognizable to anyone looking into our code.
+ It allows upcasts but not downcast
+ This type of cast is great for casting from/to void *.

### Dynamic casts
+ used at runtime to find out correct down cast but it needs at least one virtual function.

### Reinterpret cast
+ This is a dangerous cast bcos it can cast any pointer to another pointer