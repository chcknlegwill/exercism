package blackjack

// ParseCard returns the integer value of a card following blackjack ruleset.
func ParseCard(card string) int {
	//panic("Please implement the ParseCard function")
	//need to calculate value for any given card:
	//e.g. ace = 11
	switch card {
	case "two":
		return 2
	case "three":
		return 3
	case "four":
		return 4
	case "five":
		return 5
	case "six":
		return 6
	case "seven":
		return 7
	case "eight":
		return 8
	case "nine":
		return 9
	case "ten", "jack", "queen", "king":
		return 10
	case "ace":
		return 11
	default:
		return 0
	}
}

// FirstTurn returns the decision for the first turn, given two cards of the
// player and one card of the dealer.
func FirstTurn(card1, card2, dealerCard string) string {
	//panic("Please implement the FirstTurn function")

	sumOfCards := ParseCard(card1) + ParseCard(card2)

	switch {
	case card1 == "ace" && card2 == "ace":
		return "P"

	case sumOfCards == 21:
		if ParseCard(dealerCard) < 10 {
			return "W"
		}
		return "S"

	case sumOfCards >= 17 && sumOfCards <= 20:
		return "S"

	case sumOfCards >= 12 && sumOfCards <= 16:
		if ParseCard(dealerCard) >= 7 {
			return "H"
		}
		return "S"

	default:
		return "H"
	}

}
