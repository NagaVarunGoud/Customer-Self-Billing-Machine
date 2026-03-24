# Customer Self Billing System

A console-based café billing application written in C.  
It lets a customer place one or more item orders, prints an itemized bill with timestamp, applies a fixed tax per quantity, and shows the final total.

## Project Overview

This project is a beginner-friendly C program that simulates a self-billing counter in a small café or restaurant.
The user interacts through terminal prompts:

- enter customer name
- choose menu item(s)
- enter quantity for each selected item
- generate bill and total

The program supports up to 4 ordered entries in a single bill (main item + optional combo items).

## Menu and Pricing

| Item | Price (INR) |
|------|-------------|
| Coffee | 30 |
| Tea | 20 |
| Milk Shake | 50 |
| Ice Cream | 100 |

## Billing Logic

- Each selected item has `item_total = quantity * item_price`.
- Tax is fixed as `5` rupees per quantity unit.
- Per-item payable amount is `item_payable = item_total + (5 * quantity)`.
- Final total is `sum(item_payable for all selected items)`.

## Features

- Customer name capture
- Date and time printed on the bill (`time.h` / `ctime`)
- Multiple item billing in one transaction (up to 4 entries)
- Quantity-based pricing
- Automatic tax addition
- Final amount summary

## Tech Stack

- Language: C
- Standard libraries: `stdio.h`, `time.h`

## Build and Run

### Compile

```bash
gcc main.c -o billing_system
```

### Execute

```bash
./billing_system
```

## Sample User Flow

1. Launch the program.
2. Enter customer name.
3. Select first item (`1` to `4`) and quantity.
4. Add more items for combo billing, or enter `0` to checkout.
5. View the printed bill with each line item and grand total.

## Limitations (Current Version)

- Input validation is minimal (invalid choices/non-numeric inputs are not fully handled).
- Tax is hardcoded as `Rs.5` per quantity unit.
- Menu is fixed in source code (not file/database-driven).
- Code structure is procedural and repetitive; can be refactored using arrays/functions for maintainability.

## Authors

- R. Sai Srujan
- SK. Thouhid Ali
- D. Naga Varun Goud

Original implementation date: February 6, 2023.

## License

Open source project intended for learning and educational use.
