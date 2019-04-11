let component = ReasonReact.statelessComponent("TodoList");

let make = (~listName, ~todos, _) => {
  ...component,
  render: _ =>
    <div>
      <h2> {ReasonReact.string(listName)} </h2>
      <ul>
        {ReasonReact.array(
           Array.of_list(
             List.map(todo => <li> {ReasonReact.string(todo)} </li>, todos),
           ),
         )}
      </ul>
    </div>,
};
