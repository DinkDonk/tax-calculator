Tax Calculator
==============

### Install

```bash
$ make && make install
```

### Usage

```bash
$ tax 1234.5
```

Outputs:

```bash
  Sales tax: 247
  Tax: 261
```

Only calculate tax:
```bash
$ tax 1234.5 --tax-only
```

Outputs:

```bash
  Tax: 444
```

Only calculate sales tax:
```bash
$ tax 1234.5 --sales-tax-only
```

Outputs:

```bash
  Tax: 308
```
