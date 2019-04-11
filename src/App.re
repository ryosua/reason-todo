let component = ReasonReact.statelessComponent("App");

let handleClick = (_event, _self) => Js.log("clicked!");

let make = _ => {
  ...component,
  render: self =>
    <div onClick={self.handle(handleClick)}>
      <TodoList listName="Test List" todos=["Todo 1", "Todo 2", "Todo 3"] />
    </div>,
};
