# Harbor Chain Nonce Mark Walkthrough

This note is the quickest way to read the extra review model in `harbor-chain-nonce-mark`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 168 | ship |
| stress | nonce pressure | 202 | ship |
| edge | settlement risk | 116 | watch |
| recovery | proof depth | 244 | ship |
| stale | event finality | 149 | ship |

Start with `recovery` and `edge`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `edge` becomes less cautious without a clear reason, I would inspect the drag input first.
