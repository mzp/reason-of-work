open Jest;
open Expect;
open! Expect.Operators;

describe("Counter", () => {
    let subject =
      Counter.zero ()
      |> Counter.inc;

    test("value", () => expect(Counter.value(subject)) == 1)
  }
);
