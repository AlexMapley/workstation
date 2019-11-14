package main

import (
    "fmt"
    "time"
)

func main() {
    i := 2
    fmt.Print("Write ", i, " as ")
    switch i {
    case 1:
        fmt.Println("one")
    case 2:
        fmt.Println("two")
    }


    switch time.Now().Weekday() {
    case time.Saturday, time.Sunday:
        fmt.Println("Weekend!");
    default:
        fmt.Println("It's a weekday")
    }


    t := time.Now()
    switch {
    case t.Hour() < 12:
        fmt.Println("Before noon")
    default:
        fmt.Println("After noon")
   }

    whatAmI := func(i interface{}) {
        switch t := i.(type) {
        case bool:
            fmt.Println("I'm a bool")
        case int:
            fmt.Println("I'm an int")
        default:
            fmt.Printf("Don't know type %T\n", t)
        }
    }

   whatAmI(true)
   whatAmI(1)
   whatAmI("foo")
}


!óaò±ñ