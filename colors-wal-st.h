const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#040205", /* black   */
  [1] = "#571655", /* red     */
  [2] = "#6F1654", /* green   */
  [3] = "#284A6D", /* yellow  */
  [4] = "#841B60", /* blue    */
  [5] = "#02348A", /* magenta */
  [6] = "#543D86", /* cyan    */
  [7] = "#779fc8", /* white   */

  /* 8 bright colors */
  [8]  = "#536f8c",  /* black   */
  [9]  = "#571655",  /* red     */
  [10] = "#6F1654", /* green   */
  [11] = "#284A6D", /* yellow  */
  [12] = "#841B60", /* blue    */
  [13] = "#02348A", /* magenta */
  [14] = "#543D86", /* cyan    */
  [15] = "#779fc8", /* white   */

  /* special colors */
  [256] = "#040205", /* background */
  [257] = "#779fc8", /* foreground */
  [258] = "#779fc8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
