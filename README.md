# harbor-chain-nonce-mark

`harbor-chain-nonce-mark` is a C project in blockchain tooling. Its focus is to implement a C blockchain tooling project for nonce resource planning, using capacity fixtures and allocation and spill reports.

## Why It Exists

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how event finality and settlement risk should influence a review result.

## Harbor Chain Nonce Mark Review Notes

For a quick review, compare `proof depth` with `settlement risk` before reading the middle cases.

## Features

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/harbor-chain-nonce-walkthrough.md` walks through the case spread.
- The C code includes a review path for `proof depth` and `settlement risk`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture Notes

The core code exposes a scoring path and the added review layer uses `signal`, `slack`, `drag`, and `confidence`. The domain terms are `event finality`, `nonce pressure`, `settlement risk`, and `proof depth`.

The C addition stays small enough to inspect in one sitting.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Tests

The same command runs the local verification path. The highest-scoring domain case is `recovery` at 244, which lands in `ship`. The most cautious case is `edge` at 116, which lands in `watch`.

## Limitations And Roadmap

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.
