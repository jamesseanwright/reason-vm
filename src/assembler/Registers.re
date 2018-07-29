/* TODO: share regs with VM impl
 * TODO: simplify to follow Intel 8080/Altair 8800
 * (http://www.classiccmp.org/dunfield/altair/d/88opman.pdf)
 */

let addressRegisters = ["a1", "a2", "a3", "a4", "a5", "a6", "a7"];
let dataRegisters = ["d1", "d2", "d3", "d4", "d5", "d6", "d7"];

let isData = (rawToken: string) => List.exists(r => r === rawToken, dataRegisters);
let isAddress = (rawToken: string) => List.exists(r => r === rawToken, addressRegisters);

/* TODO: instruction register etc. */
