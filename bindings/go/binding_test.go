package tree_sitter_fountain_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-fountain"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fountain.Language())
	if language == nil {
		t.Errorf("Error loading Fountain grammar")
	}
}
