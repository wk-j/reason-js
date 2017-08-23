open Jest;

test "addition" (fun () => Expect.(expect (3 + 4) |> toBe 7));

let greeting = "hello!";
let score = 10;
let newScore = 10 + score;

if (true) {
    let message = "Enjoying the docs so far?";
    print_endline message;
}
