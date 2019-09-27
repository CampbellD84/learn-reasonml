let t = 5.0;
let v = 20.0;
let vPow = v ** 0.16;

let windChill = 13.12 +. 0.6215 *. t -. 11.37 *. vPow +. 0.3965 *. t *. vPow;

Js.log(
  {j|At temperature $t degrees Celsius and wind speed $v km/hr, the wind chill temperature is $windChill degrees Celsius. |j},
);